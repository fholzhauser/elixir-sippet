defmodule Sippet.Application do
  use Application

  def start(_type, _args) do
    Sippet.Transport.start_link()
  end
end
